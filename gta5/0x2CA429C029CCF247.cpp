// agency_heist3a.ysc @ L138243
void func_1100()
{
  if (!iLocal_4706)
  {
    if (!func_735())
    {
      iLocal_5076 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(135.1881f, -765.1702f, 45.5f, "v_office_lobby");
      INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_5076);
      iLocal_4706 = 1;
    }
  }
  else if (func_735())
  {
    if (INTERIOR::IS_VALID_INTERIOR(iLocal_5076))
    {
      INTERIOR::UNPIN_INTERIOR(iLocal_5076);
    }
    iLocal_4706 = 0;
  }
}