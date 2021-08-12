// fm_capture_creator.ysc @ L161179
void func_1235(var uParam0, bool bParam1)
{
  int iVar0;
  
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
  {
    PED::DELETE_PED(&(uParam0->f_2));
  }
  iVar0 = 0;
  while (iVar0 <= 79)
  {
    if (HUD::DOES_BLIP_EXIST(uParam0->f_3[iVar0]))
    {
      HUD::REMOVE_BLIP(&(uParam0->f_3[iVar0]));
    }
    if (GRAPHICS::IS_DECAL_ALIVE(uParam0->f_414[iVar0]))
    {
      GRAPHICS::REMOVE_DECAL(uParam0->f_414[iVar0]);
    }
    iVar0++;
  }
  if (bParam1)
  {
    Global_4718592.f_142050 = 0;
    iVar0 = 0;
    while (iVar0 <= 59)
    {
      Global_4718592.f_142057[iVar0 /*61*/] = { 0f, 0f, 0f };
      Global_4718592.f_142057[iVar0 /*61*/].f_3 = 0f;
      iVar0++;
    }
  }
}