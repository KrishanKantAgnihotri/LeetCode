/**
 * @param {Function} fn
 */
function memoize(fn) {
    let cache = {};
    return function(...args) {
        console.log(args);
       let x =  (args).join("^");
        console.log(cache[x]);
        if(!cache.hasOwnProperty(x)){
            cache[x] = fn(...args);
        }
        return cache[x];
    }
}


/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */