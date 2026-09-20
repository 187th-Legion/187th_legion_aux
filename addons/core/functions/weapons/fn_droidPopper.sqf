params ["_position", ["_radius", 15]];

private _droidClasses = [
    "aux187_opfor_b1_base",
    "aux187_opfor_b2_base",
    "aux187_opfor_bx_base"
];

{
    _x setDamage 1;
} forEach (nearestObjects [_position, _droidClasses, _radius]);
