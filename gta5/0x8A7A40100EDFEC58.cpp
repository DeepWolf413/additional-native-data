// agency_heist3a.ysc @ L138264
void func_1101()
{
  if (!iLocal_4649)
  {
    if (func_735())
    {
      iLocal_5077 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(133.4784f, -766.3165f, 242.5f, "V_FIB01");
      INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_5077);
      iLocal_4649 = 1;
    }
  }
  else if (!func_735())
  {
    if (INTERIOR::IS_VALID_INTERIOR(iLocal_5077))
    {
      INTERIOR::UNPIN_INTERIOR(iLocal_5077);
    }
    iLocal_4649 = 0;
  }
  else if (INTERIOR::IS_INTERIOR_READY(iLocal_5077))
  {
    STREAMING::REQUEST_MODELS_IN_ROOM(iLocal_5077, "v_fib01_jan_elev");
    STREAMING::REQUEST_MODELS_IN_ROOM(iLocal_5077, "limbo");
  }
}