// cellphone_controller.ysc @ L636
void func_4()
{
  iLocal_70 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
  switch (iLocal_70)
  {
    case 0:
      if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
      {
        iLocal_66 = NETWORK::GET_NETWORK_TIME();
      }
      else
      {
        iLocal_65 = MISC::GET_GAME_TIMER();
      }
      Global_22160 = 11;
      SYSTEM::SETTIMERB(0);
      break;
    
    case 1:
      break;
    
    case 2:
      func_14();
      break;
  }
}