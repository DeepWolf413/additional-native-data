// am_casino_peds.ysc @ L85096
void func_640(int iParam0, int iParam1, int* iParam2)
{
  if (func_15(iParam2->f_217[func_309(iParam0) /*71*/]))
  {
    if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam2->f_217[func_309(iParam0) /*71*/], MISC::GET_HASH_KEY("HideChips")))
    {
      func_620(iParam0, iParam1, iParam2);
    }
  }
}