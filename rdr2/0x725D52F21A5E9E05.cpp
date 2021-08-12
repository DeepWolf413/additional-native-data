// gang_enc_bandito_shack.ysc @ L5456
void func_140(bool bParam0)
{
  if (!bLocal_1084)
  {
    if (bLocal_1083)
    {
      if ((!PED::IS_PED_IN_COMBAT(Global_35, 0) || func_189()) || bParam0)
      {
        COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(joaat("GANG_BANDITOS"));
        bLocal_1084 = true;
      }
    }
  }
}