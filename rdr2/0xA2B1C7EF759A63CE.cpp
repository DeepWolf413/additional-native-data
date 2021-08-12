// finale2_intro.ysc @ L1348
void func_43(int iParam0)
{
  CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
  if (!bLocal_36)
  {
    if (!func_5(iParam0, 268435456))
    {
      func_25(iParam0, 268435456);
    }
    iLocal_14[7] = func_164(vLocal_32, fLocal_35, 1, 1, 1, 1, 1);
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_14[7]) && !ENTITY::IS_ENTITY_DEAD(iLocal_14[7]))
    {
      ENTITY::FREEZE_ENTITY_POSITION(iLocal_14[7], false);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_14[7], true);
      func_131(iParam0, iLocal_14[7], func_139(7), 0, 0, 1);
      bLocal_36 = true;
    }
  }
  else if (func_5(iParam0, 268435456) && CAM::_0xA2B1C7EF759A63CE() == 1f)
  {
    func_66(iParam0, 268435456);
  }
}