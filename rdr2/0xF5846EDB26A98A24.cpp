// loanshark_hunter.ysc @ L7870
void func_250(int iParam0)
{
  if (iParam0 == 0)
  {
    ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_147[iParam0], -2144.684f, 99.603f, 250.7095f, 10.1885f, true, false, true);
    ENTITY::SET_ENTITY_INVINCIBLE(uLocal_147[iParam0], true);
    ENTITY::SET_ENTITY_VISIBLE(uLocal_147[iParam0], false);
    PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_147[iParam0], 1);
    PED::SET_PED_CAN_TORSO_REACT_IK(uLocal_147[iParam0], false);
    PED::SET_PED_CAN_BE_TARGETTED(uLocal_147[iParam0], false);
    ENTITY::_0x18FF3110CF47115D(uLocal_147[iParam0], 10, 0);
    PED::_0x6569F31A01B4C097(uLocal_147[iParam0], 4, 0);
    bLocal_402 = true;
    func_664(0, iParam0);
  }
}