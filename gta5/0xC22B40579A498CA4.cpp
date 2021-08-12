// am_mp_submarine.ysc @ L344762
void func_5554(int iParam0, bool bParam1)
{
  struct<3> Var0;
  
  Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
  VEHICLE::_0xC67DB108A9ADE3BE(iParam0, 2147483647);
  TASK::TASK_SUBMARINE_GOTO_AND_STOP(0, iParam0, Var0, 1);
  VEHICLE::_0x76D26A22750E849E(iParam0);
  VEHICLE::_SET_DISABLE_SUPERDUMMY_MODE(iParam0, true);
  ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iParam0, true);
  if (bParam1)
  {
    func_5555("SUB_AUTO_AC", 0);
  }
}