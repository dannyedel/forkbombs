# DO NOT EXECUTE THIS CODE ON A PRODUCTION SYSTEM

It is **meant** to crash a system.

## Forkbombs

This is my personal collection of forkbomb code,
used as a benchmark for virtual machines.

## The Mission:

Execute the scripts/programs ***INSIDE*** a VM.

Its perfectly normal (and expected) that the VM crahses,
but the *host* should remain usable.

If the VM engine fails the forkbomb test,
it **cannot** be used for untrusted third-party code.

## Bonus Mission

Figure out a way to configure the Linux kernel OOM killer
to allow executing this on the *host* and reliably
killing the forkbomb process tree.
