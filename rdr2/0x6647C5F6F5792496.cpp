// show_nbx_snakedance_01.ysc @ L4865
void func_167(int iParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[0]))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[0], true);
  }
  if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_81[1]))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_81[1], true);
    PED::SET_PED_CAN_ARM_IK(iParam0->f_81[1], false);
    PED::_0xEE9DF765990E8D1D(iParam0->f_81[1], false);
    PED::SET_PED_CAN_HEAD_IK(iParam0->f_81[1], false);
    PED::SET_PED_CAN_LEG_IK(iParam0->f_81[1], false);
    PED::SET_PED_CAN_TORSO_IK(iParam0->f_81[1], false);
    PED::SET_PED_CAN_TORSO_REACT_IK(iParam0->f_81[1], false);
    PED::_0x6647C5F6F5792496(iParam0->f_81[1], false);
  }
  iParam0->f_12 = iParam0->f_81[0];
}