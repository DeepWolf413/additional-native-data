// agency_heist3a.ysc @ L104385
void func_549()
{
  if (bLocal_4692)
  {
    switch (iLocal_4900)
    {
      case 0:
        CLOCK::ADVANCE_CLOCK_TIME_TO(0, 0, 0);
        break;
      
      case 1:
        CLOCK::PAUSE_CLOCK(true);
        break;
    }
  }
  else
  {
    CLOCK::PAUSE_CLOCK(false);
  }
}