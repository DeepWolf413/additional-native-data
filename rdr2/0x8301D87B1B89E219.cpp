// beat_street_fight.ysc @ L3574
void func_80(int iParam0)
{
  if (!func_90(iParam0, 0, 1))
  {
    return;
  }
  if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE"), true) != 1)
  {
    return;
  }
  PED::_0x8301D87B1B89E219(iParam0, joaat("ACT_GRAPPLE_THROW_FRONT"));
  PED::_0x789DABD18E9024DB(iParam0, 32768, 0);
}