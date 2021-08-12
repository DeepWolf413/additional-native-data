// finale_heist2a.ysc @ L35743
void func_226(bool bParam0)
{
  if (bParam0)
  {
    func_227(40, 1);
    func_227(45, 1);
    func_227(41, 1);
    func_227(43, 1);
    func_227(42, 1);
    func_227(44, 1);
    OBJECT::_DOOR_CONTROL(joaat("v_ilev_mm_doorm_l"), -816.72f, 179.1f, 72.03f, true, 0f, 0f, 1f);
    OBJECT::_DOOR_CONTROL(joaat("v_ilev_mm_doorm_r"), -816.11f, 177.51f, 72.03f, true, 0f, 0f, -1f);
  }
  else
  {
    func_227(40, 0);
    func_227(45, 0);
    func_227(41, 0);
    func_227(43, 0);
    func_227(42, 0);
    func_227(44, 0);
    OBJECT::_DOOR_CONTROL(joaat("v_ilev_mm_doorm_l"), -816.72f, 179.1f, 72.03f, false, 0f, 0f, 0f);
    OBJECT::_DOOR_CONTROL(joaat("v_ilev_mm_doorm_r"), -816.11f, 177.51f, 72.03f, false, 0f, 0f, 0f);
    func_227(38, 4);
    func_227(39, 4);
  }
}