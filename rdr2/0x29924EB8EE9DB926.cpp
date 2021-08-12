// loanshark_womancry.ysc @ L24974
void func_824()
{
  if (!func_166(32))
  {
    func_74();
  }
  if (ENTITY::DOES_ENTITY_EXIST(uLocal_979[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_979[1]))
  {
    if (TASK::GET_IS_TASK_ACTIVE(uLocal_979[1], 11))
    {
    }
    ENTITY::_SET_ENTITY_HEALTH(uLocal_979[1], 15, 0);
    TASK::TASK_KNOCKED_OUT(uLocal_979[1], 15f, false);
    PED::_0x2E5B5D1F1453E08E(uLocal_979[1], 1);
    PED::_0x5BCF0B79D4F5DBA3(uLocal_979[1], 15f);
    PED::_0x29924EB8EE9DB926(uLocal_979[1], 15f);
  }
  func_71(&uLocal_928);
  func_71(&uLocal_925);
}