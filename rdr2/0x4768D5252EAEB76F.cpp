// ambient_fishing_scenario.ysc @ L152
void func_9(int iParam0)
{
  int iVar0;

  SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
  if (iVar0 == iLocal_2)
  {
    SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
    func_15(&iVar0);
  }
}