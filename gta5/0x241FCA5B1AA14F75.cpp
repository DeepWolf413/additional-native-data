// maintransition.ysc @ L137831
int func_1418(var uParam0, bool bParam1, bool bParam2)
{
  switch (uParam0->f_1245)
  {
    case 0:
      if (bParam2 == 0 || CAM::IS_SCREEN_FADED_OUT())
      {
        if (bParam2)
        {
          func_442(0, 0, 1);
        }
        func_1419(bParam1);
        uParam0->f_1245++;
      }
      break;
    
    case 1:
      if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) && DLC::_0x241FCA5B1AA14F75() == 0)
      {
        Global_2464910 = bParam1;
        return 1;
      }
      break;
  }
  return 0;
}