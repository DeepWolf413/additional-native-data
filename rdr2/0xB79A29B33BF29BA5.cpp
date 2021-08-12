// dominoes_sp.ysc @ L24086
bool func_741(var uParam0, var uParam1)
{
  MISC::CLEAR_BIT(&(uParam0->f_1321), 3);
  MISC::CLEAR_BIT(&(uParam0->f_1322), 3);
  if (MINIGAME::_DOMINOES_PLACE_DOMINO(uParam1, &(uParam0->f_1300[3 /*4*/])))
  {
    return true;
  }
  MISC::SET_BIT(&(uParam0->f_1322), 3);
  return false;
}