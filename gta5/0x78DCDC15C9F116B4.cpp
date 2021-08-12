// agency_heist1.ysc @ L109610
void func_675()
{
  if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("npcphone"))
  {
    HUD::RELEASE_NAMED_RENDERTARGET("npcphone");
  }
}