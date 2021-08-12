// director_mode.ysc @ L147136
void func_1143(int iParam0, int iParam1, int iParam2, int iParam3)
{
  struct<3> Var0;
  struct<3> Var3;
  
  func_1144(iParam0, iParam1, iParam2, iParam3);
  Var0 = { ENTITY::_GET_ENTITY_BONE_POSITION_2(iParam0, iParam2) - ENTITY::GET_ENTITY_COORDS(iParam0, false) };
  Var3 = { ENTITY::_GET_ENTITY_BONE_POSITION_2(iParam1, iParam3) - ENTITY::GET_ENTITY_COORDS(iParam1, false) };
  ENTITY::SET_ENTITY_COORDS(iParam0, ENTITY::_GET_ENTITY_BONE_POSITION_2(iParam1, iParam3) - Var0 * Vector(2f, 2f, 2f) + Var3 * Vector(2f, 2f, 2f), false, false, false, true);
  ENTITY::_ATTACH_ENTITY_BONE_TO_ENTITY_BONE(iParam0, iParam1, iParam2, iParam3, true, false);
  ENTITY::DETACH_ENTITY(iParam0, false, true);
  iLocal_11692 = MISC::GET_GAME_TIMER();
  iLocal_11684 = iParam0;
  iLocal_11685 = iParam1;
  iLocal_11681 = iParam3;
  iLocal_11682 = iParam2;
  bLocal_11696 = false;
}