// loanshark_hunter.ysc @ L54470
void func_1909(int iParam0)
{
  if (bLocal_402)
  {
    ENTITY::SET_ENTITY_VISIBLE(uLocal_147[iParam0], true);
    ENTITY::SET_ENTITY_INVINCIBLE(uLocal_147[0], false);
    PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uLocal_147[0], 1);
    PED::SET_PED_CAN_TORSO_REACT_IK(uLocal_147[0], true);
    PED::SET_PED_CAN_BE_TARGETTED(uLocal_147[iParam0], true);
    bLocal_402 = false;
  }
  PED::SET_PED_CONFIG_FLAG(uLocal_147[iParam0], 159, true);
  PED::REGISTER_HATED_TARGETS_AROUND_PED(uLocal_147[iParam0], 100f);
  PED::REGISTER_TARGET(uLocal_147[iParam0], Global_35, 1);
  TASK::TASK_COMBAT_PED(uLocal_147[iParam0], Global_35, 0, 16);
  func_2111(iParam0, 2);
  PED::_0xD7D2F45C56A4F4DF(Global_35, 1.15f, 2000);
  PED::_0x0D497AA69059FE40(Global_35, 1f);
  PED::_0x2208438012482A1A(uLocal_147[iParam0], false, false);
  if (iParam0 == 0)
  {
  }
  if (!func_49(&(vLocal_343[1 /*3*/])))
  {
    func_50(&(vLocal_343[1 /*3*/]), 0);
  }
  func_664(5, iParam0);
}