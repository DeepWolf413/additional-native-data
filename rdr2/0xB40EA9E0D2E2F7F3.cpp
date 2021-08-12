// beat_savage_warning.ysc @ L6327
void func_185(int iParam0, int iParam1, int iParam2, char* sParam3)
{
  ENTITY::SET_ENTITY_COORDS(iLocal_238[iParam2], func_131(iParam0), true, false, true, true);
  ENTITY::FREEZE_ENTITY_POSITION(iLocal_238[iParam2], true);
  PHYSICS::_0x462FF2A432733A44(iLocal_236[iParam0], iLocal_238[iParam2], iLocal_234[iParam1], 0f, 0f, 0f, 0f, 0f, 0f, "ropeAttach", sParam3);
  PHYSICS::_0x3C6490D940FF5D0B(iLocal_236[iParam0], "ropeAttach", sParam3, func_230(iParam0, 1068708659 /* Float: 1.4f */), 0);
  PHYSICS::_0x76BAD9D538BCA1AA(iLocal_236[iParam0], 0f);
  PHYSICS::_0xB40EA9E0D2E2F7F3(iLocal_236[iParam0], 1f);
}