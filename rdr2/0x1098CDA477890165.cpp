// native_son1.ysc @ L38361
bool func_868(var uParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_149))
  {
    iLocal_149 = VEHICLE::CREATE_VEHICLE(iLocal_50, func_178(1, 0), func_1445(1, 0), true, true, false, false);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_149, true);
    Local_27.f_14 = iLocal_149;
    VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_149, false);
    func_1446(uParam0, iLocal_149, 0, 0);
    VEHICLE::SET_VEHICLE_EXTRA(iLocal_149, 1, false);
    VEHICLE::SET_VEHICLE_EXTRA(iLocal_149, 2, true);
    VEHICLE::SET_VEHICLE_EXTRA(iLocal_149, 3, false);
    VEHICLE::SET_VEHICLE_EXTRA(iLocal_149, 4, true);
    PATHFIND::_0x44026E3DB3CED602(iLocal_149, "nts1_horseboat");
    func_426(uParam0, iLocal_149, "HORSEBOAT", 0, 0, 0, 0);
    VEHICLE::_0x1098CDA477890165(iLocal_149, 1);
    ENTITY::SET_ENTITY_PROOFS(iLocal_149, 6, false);
  }
  return true;
}