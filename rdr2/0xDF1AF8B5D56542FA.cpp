// beat_hostage_rescue.ysc @ L6943
void func_210(bool bParam0)
{
  ENTITY::_0x18FF3110CF47115D(iLocal_510[1], 2, !bParam0);
  ENTITY::_0x18FF3110CF47115D(iLocal_510[1], 6, !bParam0);
  ENTITY::_0x18FF3110CF47115D(iLocal_510[1], 5, !bParam0);
  func_441(iLocal_510[1], !bParam0);
  PED::SET_ENABLE_HANDCUFFS(iLocal_510[1], bParam0, bParam0);
  if (!bParam0)
  {
    PHYSICS::DETACH_ROPE_FROM_ENTITY(iLocal_1050, iLocal_510[1]);
    func_442(Local_471[2 /*12*/].f_8, 1, 1);
  }
}