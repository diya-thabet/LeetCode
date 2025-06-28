/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    res = []
    
    for(let i = 0 ; i<arr.length ; i+=size){
        let dhia = []
        min = Math.min(size , arr.length - i)
        for(let j = 0 ; j<min ; j++){
            dhia.push(arr[i+j])
        }
        res.push(dhia)
    }
    return res; 
};
