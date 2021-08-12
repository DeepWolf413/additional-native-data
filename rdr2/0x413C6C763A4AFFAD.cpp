// braithwaites3.ysc @ L35495
int func_783(var uParam0)
{
  if (func_1261(uParam0, 7, 1, 0))
  {
    iLocal_649[10] = TASK::ADD_COVER_POINT(1018.916f, -1776.511f, 46.592f, 93.905f, 1, 0, 7, false);
    PED::SET_PED_DEFENSIVE_AREA_DIRECTION(Local_172[7 /*10*/], 1015.757f, -1775.517f, 46.5923f, false);
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_172[7 /*10*/], TASK::GET_SCRIPTED_COVER_POINT_COORDS(iLocal_649[10]), -1, 0, 0f, 0, 0, iLocal_649[10], 0, 0, 0);
    PED::SET_PED_SHOOT_RATE(Local_172[7 /*10*/], 50);
    PED::SET_PED_COMBAT_ATTRIBUTES(Local_172[7 /*10*/], 24, false);
    iLocal_674[5] = VOLUME::_CREATE_VOLUME_BOX(1018.223f, -1775.534f, 46.70473f, 0f, 0f, 0f, 8.223232f, 7.665186f, 0.171322f);
    iLocal_674[4] = VOLUME::_CREATE_VOLUME_BOX(1018.223f, -1766.718f, 46.70473f, 0f, 0f, 0f, 8.223232f, 9.37284f, 0.17322f);
    PED::SET_PED_CONFIG_FLAG(Local_101[2 /*10*/], 252, false);
    PED::SET_PED_CONFIG_FLAG(Local_101[1 /*10*/], 252, false);
    func_1285(1595076728, 1, 0f, 0, 0, 0, 1, 0);
    func_1285(1595076728, 1, 0f, 0, 0, 0, 1, 0);
    return 1;
  }
  return 0;
}