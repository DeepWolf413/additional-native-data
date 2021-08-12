// appinternet.ysc @ L272698
void func_2551()
{
  if (MISC::ARE_STRINGS_EQUAL(&cLocal_1849, ""))
  {
    HUD::CLEAR_ADDITIONAL_TEXT(4, true);
    StringCopy(&cLocal_1849, func_2552(), 24);
  }
  else if (!MISC::ARE_STRINGS_EQUAL(&cLocal_1849, func_2552()))
  {
    HUD::CLEAR_ADDITIONAL_TEXT(4, true);
    StringCopy(&cLocal_1849, func_2552(), 24);
  }
  HUD::REQUEST_ADDITIONAL_TEXT(&cLocal_1849, 4);
  bLocal_247 = true;
  if (HUD::DOES_TEXT_BLOCK_EXIST(&cLocal_1849))
  {
    while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(4))
    {
      func_2619(0, 0);
      SYSTEM::WAIT(0);
    }
  }
}