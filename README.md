# stopping_tolfun

Stop the optimization iteration if the new target function value does not improve as much anymore

```
| f(x_{k+1}) - f(x_k) | < TolFun
```

### Installation
```
clib install hcnn/stopping_tolfun
```

Or add to your `package.json` and run `clib install`

```
{ ...
    "dependencies": {
        "hcnn/stopping_tolfun": "0.1.0",
        ...
```

### Example
See [test.c](https://github.com/hcnn/stopping_tolfun/blob/master/test.c)

Download, compile, and run test.c

```
git clone git@github.com:hcnn/stopping_tolfun.git
cd stopping_tolfun
make
```

### Links
* http://hcnn.de/docs/stopping_tolfun