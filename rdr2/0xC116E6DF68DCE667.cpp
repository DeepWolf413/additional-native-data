// odriscolls1.ysc @ L92675
void func_2323()
{
  switch (iLocal_3785)
  {
    case 0:
      if (iLocal_3773 > 0)
      {
        UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 3);
        UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 3);
        iLocal_3802 = MISC::GET_GAME_TIMER();
        iLocal_3785++;
      }
      break;
    case 1:
      if (func_1738(&iLocal_3802, 15000))
      {
        UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
        UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
        iLocal_3785++;
      }
      break;
    case 2:
      break;
  }
}