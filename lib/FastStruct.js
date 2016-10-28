'use strict';
const _ = require('lodash');
const assert = require('assert');
const verify = require('./verify');
const StructType = require('./TooTallNates/struct')
const FieldsDefinition = require('./FieldsDefinition');

class FastStruct extends FieldsDefinition {
    constructor(library, def) {
        super({
            library,
            FactoryType: StructType,
            def,
            propertyName: 'struct'
        });
    }
}

module.exports = FastStruct;