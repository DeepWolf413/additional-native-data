// feud1.ysc @ L39192
int func_827(var uParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_112[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_112[0]))
  {
    ENTITY::SET_ENTITY_COORDS(iLocal_112[0], 625.161f, -1245.4f, 40.25f, true, false, true, true);
    ENTITY::SET_ENTITY_ROTATION(iLocal_112[0], 5f, -0.051f, -60.633f, 2, true);
    ENTITY::FREEZE_ENTITY_POSITION(iLocal_112[0], true);
    VEHICLE::_0x23A3AB86E0807721(iLocal_112[0], true);
    VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_112[0], false);
  }
  PED::SET_PED_RESET_FLAG(Global_35, 175, true);
  return 1;
}