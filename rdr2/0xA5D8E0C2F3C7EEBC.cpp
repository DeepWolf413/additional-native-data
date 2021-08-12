// abigail2_1.ysc @ L65643
void func_1809(var uParam0)
{
  bool bVar0;

  if (!func_1377(uParam0, 134217728))
  {
    bVar0 = true;
    SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("BANDANA"));
    if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("BANDANA")))
    {
      bVar0 = false;
    }
    STREAMING::REQUEST_ANIM_DICT(func_2150(1));
    if (!STREAMING::HAS_ANIM_DICT_LOADED(func_2150(1)))
    {
      bVar0 = false;
    }
    if (bVar0)
    {
      func_743(uParam0, 134217728);
    }
  }
}