// beat_street_fight.ysc @ L6194
void func_178(int iParam0, int iParam1)
{
  if (!func_90(uLocal_178[iParam0], 0, 1))
  {
    return;
  }
  ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_178[iParam1], false);
  PED::_0x8301D87B1B89E219(uLocal_178[iParam0], joaat("ACT_GRAPPLE_KNOCKOUT"));
  PED::_0x789DABD18E9024DB(uLocal_178[iParam0], 32, 0);
  TASK::TASK_KNOCKED_OUT(uLocal_178[iParam1], 20f, true);
  iLocal_186 = uLocal_178[iParam1];
  if (iParam1 == 0)
  {
    func_262(8);
  }
  else
  {
    func_262(4);
  }
}