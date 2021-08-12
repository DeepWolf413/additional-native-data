// long_update.ysc @ L31928
void func_1084(var uParam0, bool bParam1, bool bParam2)
{
  uParam0->f_2 = 0;
  if (!bParam2)
  {
    uParam0->f_6 = { 0f, 0f, 0f };
  }
  if (bParam1 && TASK::_0x1AC5A8AB50CFAA33(uParam0->f_1))
  {
    TASK::_0x0365000D8BF86531(&(uParam0->f_1));
  }
  *uParam0 = 0;
}