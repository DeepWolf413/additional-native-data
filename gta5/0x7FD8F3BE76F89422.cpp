// am_hold_up.ysc @ L857
void func_20()
{
  if (Local_77.f_30 == 0)
  {
    if (Local_77.f_3 >= 2 && Local_77.f_3 != 9)
    {
      Local_77.f_30 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(101, PLAYER::PLAYER_PED_ID(), 60000f);
    }
  }
}