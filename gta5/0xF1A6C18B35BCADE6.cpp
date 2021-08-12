// pausemenu_map.ysc @ L7711
void func_218()
{
  if (iLocal_370 == 1)
  {
    if (func_252(iLocal_328, &uLocal_371))
    {
      func_232(1, 65, Local_260, iLocal_318, &Local_263, &cLocal_279, func_250(iLocal_328, 500), iLocal_317, iLocal_311, iLocal_312, iLocal_313, iLocal_314, iLocal_315, iLocal_316, bLocal_319, Local_322, &Local_333, iLocal_320, bLocal_321, iLocal_329, 0, 0, 1, iLocal_355, iLocal_356);
      if (bLocal_330)
      {
        HUD::SHOW_START_MISSION_INSTRUCTIONAL_BUTTON(true);
      }
      func_230(1);
      iLocal_370 = 0;
    }
  }
}