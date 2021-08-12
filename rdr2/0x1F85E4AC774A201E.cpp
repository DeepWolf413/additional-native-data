// act_fishing06.ysc @ L20929
bool func_545(var uParam0, int iParam1)
{
  struct<11> Var0;

  if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
  {
    Var0 = { func_928(iParam1) };
    *uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_9, Var0, Var0.f_3, Var0.f_6, Var0.f_10);
  }
  return true;
}