use std::fs::File;
use std::io::{BufRead, BufReader, BufWriter, Write};

const N: usize = 10_000_000;
const _EXPECTED: usize = (N * N >> 1) - (N >> 1);

fn bench<F>(mut f: F) -> std::time::Duration
where
    F: FnMut(usize),
{
    let start = std::time::Instant::now();

    for i in 0..N {
        f(i);
    }

    start.elapsed()
}

fn main() {
    {
        let f = File::create("rust.txt").unwrap();
        let mut f = BufWriter::with_capacity(1048576, f);
        let duration = bench(|i| {
            writeln!(&mut f, "{}", i);
        });
        println!("Output: {:12}", duration.as_nanos());
    }
    let mut v = vec![0usize; 10_000_000];
    {
        let f = File::open("rust.txt").unwrap();
        let mut f = BufReader::with_capacity(1048576, f);
        let mut s = String::new();
        let duration = bench(|i| {
            f.read_line(&mut s);
            v[i] = s.trim().parse().unwrap();
            s.clear();
        });
        println!("Input:  {:12}", duration.as_nanos());
    }
}
