// bjack_sp.ysc @ L20593
void func_701(var uParam0, bool bParam1)
{
  int iVar0;

  if (bParam1)
  {
    if (uParam0->f_1239 != 0 && PED::IS_PED_INJURED(uParam0->f_1239))
    {
      func_121(uParam0, 0);
    }
  }
  if (uParam0->f_1239 != 0)
  {
    Stack.Push(uParam0);
    Stack.Push(&(uParam0->f_1239));
    Call_Loc(uParam0->f_1293[uParam0->f_1239.f_6]);
  }
  iVar0 = uParam0->f_1239;
  if (iVar0 != 0)
  {
    if (uParam0->f_1239.f_22)
    {
      if (!PED::IS_PED_INJURED(iVar0))
      {
        PED::SET_PED_CAN_LEG_IK(iVar0, false);
        PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iVar0, 0, 1);
      }
    }
  }
}