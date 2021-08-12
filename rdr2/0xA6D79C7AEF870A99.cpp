// flow_controller.ysc @ L8766
void func_349(int iParam0, var uParam1)
{
  int iVar0;

  if (iParam0 <= -1)
  {
    return;
  }
  iVar0 = func_681(iParam0, uParam1);
  if (iVar0 == 0)
  {
    return;
  }
  UNLOCK::_UNLOCK_SET_NEW(iVar0, true);
}