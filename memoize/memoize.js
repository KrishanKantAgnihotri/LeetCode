/**
 * @param {Function} fn
 */
function memoize(fn) {
    const cache = {};
    return function(...args) {
       const x =  (args).join(" ");
        if(x in cache){
            return cache[x];
        }
        cache[x] = fn(...args);
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