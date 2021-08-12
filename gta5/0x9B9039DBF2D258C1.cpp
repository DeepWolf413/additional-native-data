// agency_heist3a.ysc @ L106049
void func_592(bool bParam0, bool bParam1)
{
  func_595(bParam0);
  func_594(bParam0);
  func_593(bParam0);
  if (bParam1)
  {
    PHYSICS::ROPE_LOAD_TEXTURES();
    if (bParam0)
    {
      while (!PHYSICS::ROPE_ARE_TEXTURES_LOADED())
      {
        SYSTEM::WAIT(0);
      }
    }
  }
}