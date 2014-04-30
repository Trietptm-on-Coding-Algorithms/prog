var res = [];

function inspectClass(obj) {
    var objClass, className;
    var classProto;
    var methods = [];
    var attributes = {};
    var t, a;

    try {
        if (typeof(obj) != 'function') {
            objClass = obj.constructor;
        } else {
            objClass = obj;
        }

        className = objClass.name;
        classProto = objClass.prototype;

        Object.getOwnPropertyNames(classProto).forEach(function(m) {
            t = typeof(classProto[m]);
            if (t == 'function') {
                methods.push(m);
            } else {
                attributes[m] = t;
            }
        });
    } catch (err) {
       className = 'undefined';
    }
   return { 'ClassName' : className,
            'Methods' : methods,
            'Attributes' : attributes
          };
}

exports.inspect = inspectClass;
