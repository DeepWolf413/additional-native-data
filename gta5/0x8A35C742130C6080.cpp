// fmmc_launcher.ysc @ L636682
void func_10707(int* iParam0, struct<3> Param1, int iParam4, int iParam5)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = ((2.6f * 2f) * 1.04f);
  if (!MISC::IS_BIT_SET(*iParam0, true))
  {
    GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPMissMarkers256", false);
    if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPMissMarkers256"))
    {
      Param1.f_2 = (Param1.f_2 + 1f);
      if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &(Param1.f_2), false, false))
      {
        HUD::GET_HUD_COLOUR(iParam4, &iVar0, &iVar1, &iVar2, &iVar3);
        iVar3 = 120;
        iParam0->f_3 = GRAPHICS::CREATE_CHECKPOINT(53, Param1, Param1, fVar4, iVar0, iVar1, iVar2, iVar3, 0);
        GRAPHICS::PATCH_DECAL_DIFFUSE_MAP(9123, "MPMissMarkers256", func_10708(iParam5));
        MISC::SET_BIT(iParam0, true);
      }
    }
  }
}