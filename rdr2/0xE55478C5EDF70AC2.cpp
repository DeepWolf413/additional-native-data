// homeinvasion.ysc @ L91614
void func_2973()
{
  int iVar0;
  int iVar1;
  var uVar2[5];

  if (func_151(vLocal_5663))
  {
    return;
  }
  iVar1 = 5;
  TASK::_GET_SCENARIO_POINT_CLOSE_TO_COORDS(vLocal_5663, 0.75f, &uVar2, iVar1);
  iVar0 = 0;
  while (iVar0 < iVar1)
  {
    if (TASK::_0xE55478C5EDF70AC2(uVar2[iVar0]) == iLocal_5660)
    {
      Local_268.f_2155[0 /*7*/].f_3 = uVar2[iVar0];
      return;
    }
    iVar0++;
  }
}