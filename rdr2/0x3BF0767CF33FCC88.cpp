// weapon_locker.ysc @ L407
bool func_19(var uParam0, var uParam1)
{
  if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
  {
    return false;
  }
  uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam1, "weapons_page");
  if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
  {
    return false;
  }
  uParam0->f_2.f_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2, "weapon_list");
  if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2.f_1))
  {
    DATABINDING::_0x3BF0767CF33FCC88(uParam0->f_2.f_1);
  }
  uParam0->f_2.f_90 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_2, "weapon_list_hint_visible", 0);
  uParam0->f_2.f_91 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2, "weapon_list_hint_label", 0);
  return true;
}