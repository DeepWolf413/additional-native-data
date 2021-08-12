// ambush_exc_hide_cover.ysc @ L14413
void func_489(var uParam0, bool bParam1)
{
  if (!bParam1)
  {
  }
  if (uParam0->f_1 != 0)
  {
    EVENT::REMOVE_SHOCKING_EVENT(uParam0->f_1);
    uParam0->f_1 = 0;
  }
  func_597(uParam0->f_2);
  func_597(uParam0->f_3);
  uParam0->f_5 = -1f;
  uParam0->f_6 = -1f;
  uParam0->f_8 = -1f;
  uParam0->f_12 = "";
  func_188(&(uParam0->f_9));
  func_192(&(uParam0->f_9));
  *uParam0 = 0;
}