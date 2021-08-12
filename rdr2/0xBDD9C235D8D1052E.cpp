// sadie2.ysc @ L56134
void func_1306(var uParam0)
{
  if (!func_1262(64))
  {
    if (!WEAPON::_0xBDD9C235D8D1052E(Global_35))
    {
      if ((((!(ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_36[9 /*17*/], false) && ANIMSCENE::_0x1F0E401031E20146(Local_36[9 /*17*/], func_414(12))) && !(ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_36[13 /*17*/], false) && ANIMSCENE::_0x1F0E401031E20146(Local_36[13 /*17*/], func_414(21)))) && !func_1225("SAD2_S4_OBJ02")) && !func_1222(2048)) && func_1222(4096))
      {
        if (func_1676(&uLocal_2576) >= 2f)
        {
          if (!func_1310())
          {
            if (func_1311(uParam0, "SAD2_S3_GUN", 0))
            {
              func_1263(64);
            }
          }
          else
          {
            func_224(&uLocal_2576);
          }
        }
      }
      else if (func_28(&uLocal_2576))
      {
        func_224(&uLocal_2576);
      }
    }
  }
}