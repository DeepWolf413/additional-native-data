// loanshark_hunter.ysc @ L54499
void func_1910(int iParam0)
{
  TASK::TASK_AMBIENT_ANIMAL_HUNT(uLocal_147[iParam0], Global_35, 1);
  if (bLocal_402)
  {
    ENTITY::SET_ENTITY_VISIBLE(uLocal_147[iParam0], true);
    ENTITY::SET_ENTITY_INVINCIBLE(uLocal_147[0], false);
    PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uLocal_147[0], 1);
    PED::SET_PED_CAN_TORSO_REACT_IK(uLocal_147[0], true);
    PED::SET_PED_CAN_BE_TARGETTED(uLocal_147[iParam0], true);
    bLocal_402 = false;
  }
  func_664(4, iParam0);
}