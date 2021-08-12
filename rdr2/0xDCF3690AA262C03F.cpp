// gang3_intro.ysc @ L3086
bool func_138()
{
  vector3 vVar0;
  var uVar3;

  if (ENTITY::DOES_ENTITY_EXIST(iLocal_20))
  {
    return true;
  }
  iLocal_20 = VEHICLE::CREATE_VEHICLE(joaat("ROWBOATSWAMP02"), func_158(0, 2), func_290(0, 2), true, true, false, false);
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_20))
  {
    vVar0 = { func_158(0, 2) };
    if (WATER::GET_WATER_HEIGHT_NO_WAVES(vVar0, &uVar3))
    {
      vVar0.f_2 = uVar3;
    }
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_20, vVar0, false, true, true);
    VEHICLE::SET_VEHICLE_EXTRA(iLocal_20, 1, true);
    VEHICLE::SET_VEHICLE_EXTRA(iLocal_20, 2, false);
    VEHICLE::SET_VEHICLE_EXTRA(iLocal_20, 5, true);
    ENTITY::_0x7A49D40DE437BC8D(iLocal_20, 0);
    ENTITY::_0x978AA2323ED32209(iLocal_20, 0f);
    VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_20, false);
    return true;
  }
  return false;
}