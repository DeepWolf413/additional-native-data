// bjack_sp.ysc @ L30128
void func_1027(var uParam0)
{
  if (*uParam0 == 0)
  {
  }
  else
  {
    NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
    *uParam0 = 0;
  }
}